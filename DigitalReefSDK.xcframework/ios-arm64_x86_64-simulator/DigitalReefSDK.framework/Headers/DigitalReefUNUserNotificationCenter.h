//
//  DigitalReefUNUserNotificationCenter.h
//  DigitalReefSDK
//
//  Created by Ailton Feller on 14/09/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DigitalReefUNUserNotificationCenter : NSObject

+(void) setupMethods;
+(void) takeActionForButton:(NSString *)actionIdentifier withInfo:(NSDictionary *) userInfo;

@end

NS_ASSUME_NONNULL_END
