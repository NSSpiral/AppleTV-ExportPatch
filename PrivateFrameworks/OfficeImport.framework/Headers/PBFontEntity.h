/* Runtime dump - PBFontEntity
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBFontEntity : NSObject
{
    NSString * mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (void)dealloc;
- (int)type;
- (int)family;
- (NSString *)faceName;
- (int)charSet;
- (PBFontEntity *)initWithName:(NSString *)arg0 charSet:(int)arg1 type:(int)arg2 family:(int)arg3;

@end
