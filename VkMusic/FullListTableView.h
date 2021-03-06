//
//  FullListTableView.h
//  VkMusic
//
//  Created by keepcoder on 31.03.13.
//  Copyright (c) 2013 keepcoder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Audio.h"
#import "AudioLogic.h"
#import "ILogicController.h"
#import "PlayerView.h"
#import "BaseViewList.h"
@interface FullListTableView : BaseViewList<UITableViewDataSource,UITableViewDelegate, AudioLogicDelegate, UISearchBarDelegate>
@property (nonatomic,strong) id <ILogicController> logic;
@property (nonatomic,strong) PlayerView *playerView;
@property (nonatomic,strong) UISearchBar *search;
@property (nonatomic,strong) NSMutableArray *searchResult;
-(void)setMainController:(UIViewController*)controller;
-(void)needNextAudio:(BOOL)physic;
-(Audio *)findAudioByRow:(NSInteger)row;
-(void)reloadTable;
-(void)needPrevAudio:(BOOL)physic;
-(id)initWithFrame:(CGRect)frame andLogic:(id<ILogicController>)logicController;
-(void)clearSearch;
@end
