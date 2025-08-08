//
//  AWHBGMMonomerMonitoringAnnotation.h
//  AWHBGaudeMapBus
//
//  Created by GeDaTing on 2022/3/26.
//

#import <MAMapKit/MAMapKit.h>
#import <AWHBPublicBusiness/AWHBPBMonomerMonitoringCalloutView.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>
NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitleBlock)(NSString *title);
@interface AWHBGMMonomerMonitoringAnnotation : MAPinAnnotationView

@property (nonatomic, assign) NSUInteger count;

@property (nonatomic, readonly) AWHBPBMonomerMonitoringCalloutView *calloutView;
@property (nonatomic, strong) AWHBBCarModel *model;
@property (nonatomic, assign) int index;

@property(nonatomic,copy)NSString *drvPhone;
@property(nonatomic,copy)NSString *acc;
@property(nonatomic,copy)NSString *teamName;
@property(nonatomic,copy)NSString *carName;
@property(nonatomic,copy)NSString *simCard;
@property(nonatomic,copy)NSString *tmnNo;
@property(nonatomic,copy)NSString *time;
@property(nonatomic,copy)NSString *drvName;
@property(nonatomic,copy)NSString *sgn;
@property(nonatomic,copy)NSString *addr;
@property(nonatomic,copy)NSString *speed;
@property(nonatomic,copy)NSString *mile;
@property(nonatomic,copy)NSString *preMile;
@property(nonatomic,copy)NSString *carPlate;
@property(nonatomic,copy)NSString *plateColor;
@property(nonatomic,copy)NSString *bigIconLink;
@property(nonatomic,copy)NSString *carType;
@property(nonatomic,copy)NSString *carID;
@property(nonatomic,copy)NSString *stateCn;
@property(nonatomic,copy)NSString *drctCn;
@property(nonatomic,copy)NSString *moni1;
@property(nonatomic,copy)NSString *moni2;

@property (nonatomic,copy)NSString *lat;
@property (nonatomic,copy)NSString *lng;
@property (nonatomic, readwrite,strong) UILabel *countLab;
@property (nonatomic, strong) UILabel *speedLab;
@property(nonatomic,copy)ReturnBtnTitleBlock ReturnBtnTitleBlock;
@property (nonatomic, copy) void (^countClick)(void);

@end

NS_ASSUME_NONNULL_END
