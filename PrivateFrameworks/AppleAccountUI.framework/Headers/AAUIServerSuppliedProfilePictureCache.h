/* Runtime dump - AAUIServerSuppliedProfilePictureCache
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIServerSuppliedProfilePictureCache : NSObject
{
    NSMutableDictionary * _personIDToEntryMap;
    float _pictureDiameter;
}

@property (readonly, nonatomic) float pictureDiameter;

+ (AAUIServerSuppliedProfilePictureCache *)sharedCache;

- (AAUIServerSuppliedProfilePictureCache *)init;
- (void).cxx_destruct;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(float)arg0;
- (float)pictureDiameter;
- (NSObject *)profilePictureForPersonID:(NSObject *)arg0 diameter:(float)arg1 serverFetchBlock:(id /* block */)arg2;
- (void)profilePictureForPersonID:(NSObject *)arg0 diameter:(float)arg1 completion:(id /* block */)arg2;
- (char)updateProfilePicture:(id)arg0 didReceiveNewPicture:(char)arg1 serverCacheTag:(NSString *)arg2 forPersonID:(NSObject *)arg3;

@end
