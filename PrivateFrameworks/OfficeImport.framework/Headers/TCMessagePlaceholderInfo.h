/* Runtime dump - TCMessagePlaceholderInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessagePlaceholderInfo : NSObject
{
    id mKey;
    char mInUse;
}

- (void)dealloc;
- (TCMessagePlaceholderInfo *)init;
- (NSString *)key;
- (char)isInUse;
- (void)setInUse:(char)arg0;

@end
