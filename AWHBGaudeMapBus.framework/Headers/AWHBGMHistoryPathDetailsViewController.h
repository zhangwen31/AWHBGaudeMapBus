//
//  AWHBGMHistoryPathDetailsViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AWHBPublicBusiness/AWHBPBCountDataModel.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMHistoryPathDetailsViewController : AWHBBBaseViewController

/** */
@property(nonatomic,copy)NSString *plate;
@property(nonatomic,strong)NSMutableArray *pathArray;
@property(nonatomic,strong)AWHBPBCountDataModel *countDataModel;
@property(nonatomic,strong)NSMutableArray *alarmDataArray;
@property(nonatomic,strong)NSMutableArray *stopDataArray;
@property(nonatomic,strong)NSMutableArray *overspeedDataArray;
//速度阈值
@property (nonatomic, assign) CGFloat speedThreshold;

@property(nonatomic,strong)AWHBBCarModel *model;
//分享时候需要  开始时间
@property(nonatomic,strong)NSString *startTimeStr;
//分享时候需要  结束时间
@property(nonatomic,strong)NSString *endTimeStr;


@end

NS_ASSUME_NONNULL_END
