/* Runtime dump - ATVFairPlayContext
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVFairPlayContext : NSObject

+ (unsigned long)contextID;
+ (void)importKeyBagData:(NSData *)arg0;
+ (struct FairPlayHWInfo_)hwInfo;
+ (NSString *)keyBagPath;
+ (void)deleteKeyBag;

@end
