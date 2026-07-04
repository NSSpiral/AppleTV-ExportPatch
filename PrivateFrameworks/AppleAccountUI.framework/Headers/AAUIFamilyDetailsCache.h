/* Runtime dump - AAUIFamilyDetailsCache
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyDetailsCache : NSObject
{
    unsigned int _pendingInviteCount;
    char _isValid;
    char _isValidating;
}

@property (readonly, nonatomic) unsigned int pendingInviteCount;

+ (AAUIFamilyDetailsCache *)sharedCache;

- (void)invalidate;
- (unsigned int)pendingInviteCount;
- (void)_fetchPendingInviteCount;
- (void)_setPendingInviteCount:(unsigned int)arg0;

@end
