/* Runtime dump - OADOle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOle : NSObject
{
    char mIconic;
    NSString * mCLSID;
    NSString * mAnsiUserType;
    NSString * mAnsiClipboardFormatName;
    unsigned long mWinClipboardFormat;
    NSString * mMacClipboardFormat;
    NSString * mAnsiProgID;
    NSString * mUnicodeUserType;
    NSString * mUnicodeClipboardFormatName;
    NSString * mUnicodeProgID;
    id mObject;
}

+ (char)isProgIDChart:(id)arg0;
+ (char)isProgIDMathType:(NSObject *)arg0;
+ (char)isCLSIDSupported:(id)arg0;

- (void)dealloc;
- (OADOle *)init;
- (NSString *)description;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (id)CLSID;
- (void)setCLSID:(NSSet *)arg0;
- (void)setAnsiUserType:(NSObject *)arg0;
- (void)setWinClipboardFormat:(unsigned long)arg0;
- (void)setMacClipboardFormat:(NSString *)arg0;
- (void)setAnsiClipboardFormatName:(NSString *)arg0;
- (void)setAnsiProgID:(NSObject *)arg0;
- (void)setUnicodeUserType:(NSObject *)arg0;
- (void)setUnicodeClipboardFormatName:(NSString *)arg0;
- (void)setUnicodeProgID:(NSObject *)arg0;
- (char)iconic;
- (void)setIconic:(char)arg0;
- (NSObject *)ansiUserType;
- (NSString *)ansiClipboardFormatName;
- (unsigned long)winClipboardFormat;
- (NSString *)macClipboardFormat;
- (NSObject *)ansiProgID;
- (NSObject *)unicodeUserType;
- (NSString *)unicodeClipboardFormatName;
- (NSObject *)unicodeProgID;

@end
