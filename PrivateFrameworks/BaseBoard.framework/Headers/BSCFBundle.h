/* Runtime dump - BSCFBundle
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCFBundle : NSObject
{
    struct __CFBundle * _cfBundle;
}

- (void)dealloc;
- (NSString *)description;
- (NSString *)localizedStringForKey:(NSString *)arg0 value:(NSObject *)arg1 table:(_UIAlertSheetTable *)arg2;
- (NSDictionary *)infoDictionary;
- (NSString *)bundleIdentifier;
- (NSString *)bundlePath;
- (NSString *)executablePath;
- (NSObject *)pathForResource:(NSObject *)arg0 ofType:(NSString *)arg1;
- (NSObject *)pathForResource:(NSObject *)arg0 ofType:(NSString *)arg1 inDirectory:(PLSimpleDCIMDirectory *)arg2;
- (BSCFBundle *)initWithPath:(NSString *)arg0;
- (NSDictionary *)localizedInfoDictionary;
- (BSCFBundle *)initWithCFBundle:(struct __CFBundle *)arg0;
- (NSObject *)_pathsForResource:(NSObject *)arg0 ofType:(NSString *)arg1 inDirectory:(PLSimpleDCIMDirectory *)arg2;
- (struct __CFBundle *)cfBundle;

@end
