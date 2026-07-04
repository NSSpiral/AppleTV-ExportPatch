/* Runtime dump - PLImageDataInfo
 * Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLImageDataInfo : NSObject
{
    char _deliveredPlaceholder;
    char _canDownloadFromCloud;
    int _deliveredFormat;
    NSURL * _URL;
    NSString * _sandboxExtensionToken;
    NSString * _UTI;
    int _EXIFOrientation;
}

@property int deliveredFormat;
@property char deliveredPlaceholder;
@property char canDownloadFromCloud;
@property (retain) NSURL * URL;
@property (retain) NSString * sandboxExtensionToken;
@property (retain) NSString * UTI;
@property int EXIFOrientation;

- (int)deliveredFormat;
- (char)canDownloadFromCloud;
- (NSString *)sandboxExtensionToken;
- (int)EXIFOrientation;
- (void)dealloc;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (NSString *)UTI;
- (void)setUTI:(NSSet *)arg0;
- (void)setDeliveredFormat:(int)arg0;
- (void)setCanDownloadFromCloud:(char)arg0;
- (void)setSandboxExtensionToken:(NSString *)arg0;
- (void)setEXIFOrientation:(int)arg0;
- (char)deliveredPlaceholder;
- (void)setDeliveredPlaceholder:(char)arg0;

@end
