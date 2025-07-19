//
//  AWHBGMPathStopCarViewController.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2023/5/1.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
#import <AWHBPublicBusiness/AWHVPCarVideoModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMPathStopCarViewController : AWHBBBaseViewController

@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)NSMutableArray *stopDataArray;
@property(nonatomic,strong)AWHBBCarModel *model;
/// 视频通道
@property(nonatomic,strong)NSArray<AWHVPCarVideoModel *> *videoArray;

@end

NS_ASSUME_NONNULL_END
