//
//  AWHBGMMonitoringMapViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/19.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMonitoringMapViewController : AWHBBBaseViewController

@property(nonatomic, assign)AWHBBBusinessLoginModeType type;
/// 是否隐藏更多
@property(nonatomic, assign) BOOL isHiddenMore;

/// 是否不展示 车辆没有相关定位数据
@property(nonatomic, assign) BOOL isNoShowLoctionPration;

- (void)setupType:(NSNumber *)type;

@end

NS_ASSUME_NONNULL_END
