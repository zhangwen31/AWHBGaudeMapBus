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

- (void)setupType:(NSNumber *)type;

@end

NS_ASSUME_NONNULL_END
