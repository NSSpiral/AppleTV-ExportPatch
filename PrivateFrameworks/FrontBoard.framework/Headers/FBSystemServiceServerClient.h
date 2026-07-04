/* Runtime dump - FBSystemServiceServerClient
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemServiceServerClient : BSBasicServerClient
{
    char _uiApp;
    NSString * _bundleID;
    char _extension;
    NSString * _bundlePath;
}

@property (readonly, nonatomic) int pid;
@property (readonly, retain, nonatomic) NSString * bundleID;
@property (nonatomic) char UIApp;
@property (nonatomic) char extension;
@property (retain, nonatomic) NSString * bundlePath;

- (void)dealloc;
- (NSString *)description;
- (NSString *)bundlePath;
- (void)setExtension:(char)arg0;
- (void)setBundlePath:(NSString *)arg0;
- (NSString *)bundleID;
- (int)pid;
- (void)setUIApp:(char)arg0;
- (char)isUIApp;
- (char)isExtension;
- (FBSystemServiceServerClient *)initWithConnection:(NSURLConnection *)arg0;

@end
