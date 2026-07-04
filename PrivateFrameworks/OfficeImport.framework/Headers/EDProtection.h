/* Runtime dump - EDProtection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProtection : NSObject <NSCopying>
{
    BOOL mHidden;
    BOOL mLocked;
}

+ (EDProtection *)protectionWithHidden:(BOOL)arg0 locked:(BOOL)arg1;

- (BOOL)isHidden;
- (EDProtection *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (BOOL)isLocked;
- (EDProtection *)copyWithZone:(struct _NSZone *)arg0;
- (EDProtection *)initWithHidden:(BOOL)arg0 locked:(BOOL)arg1;
- (char)isEqualToProtection:(id)arg0;

@end
