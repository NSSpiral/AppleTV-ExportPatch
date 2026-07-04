/* Runtime dump - IPPortWrapper
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface IPPortWrapper : NSObject
{
    struct tagIPPORT * _ipport;
}

@property struct tagIPPORT * ipport;

- (void)dealloc;
- (IPPortWrapper *)init;
- (struct tagIPPORT *)ipport;
- (void)setIpport:(struct tagIPPORT *)arg0;

@end
