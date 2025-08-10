//
//  AWHBGMMaintenancennotationView.h
//  AWHBGaudeMapBus
//
//  Created by 王恒 on 2024/3/10.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBPublicBusiness/AWHBPBMaintenanceManagementModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBGMMaintenancennotationView : MAPinAnnotationView

@property (nonatomic, strong) AWHBPBMaintenanceManagementModel *model;
@property (nonatomic, strong) UILabel *numLabel;

@end

NS_ASSUME_NONNULL_END
