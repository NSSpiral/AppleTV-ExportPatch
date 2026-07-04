/* Runtime dump - HandleWrapper
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface HandleWrapper : NSObject
{
    struct tagHANDLE * handle;
}

@property struct tagHANDLE * handle;

- (struct tagHANDLE *)handle;
- (void)setHandle:(struct tagHANDLE *)arg0;

@end
