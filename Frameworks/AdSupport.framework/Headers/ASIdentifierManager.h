/* Runtime dump - ASIdentifierManager
 * Image: /System/Library/Frameworks/AdSupport.framework/AdSupport
 */

@interface ASIdentifierManager : NSObject

@property (readonly, nonatomic) NSUUID * advertisingIdentifier;
@property (readonly, nonatomic) char advertisingTrackingEnabled;

+ (ASIdentifierManager *)sharedManager;

- (NSUUID *)advertisingIdentifier;
- (char)isAdvertisingTrackingEnabled;

@end
