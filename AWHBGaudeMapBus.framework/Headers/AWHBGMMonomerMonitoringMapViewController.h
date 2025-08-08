//
//  AWHBGMMonomerMonitoringMapViewController.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <AWHBBasicBusiness/AWHBBBaseViewController.h>
#import <AMapNaviKit/AMapNaviKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMonomerMonitoringMapViewController : AWHBBBaseViewController
@property (nonatomic, strong) AMapNaviDriveManager *driveManager;
@property (nonatomic, strong) AMapNaviDriveView *driveView;
- (void)carDataRefresh;
@end

NS_ASSUME_NONNULL_END
