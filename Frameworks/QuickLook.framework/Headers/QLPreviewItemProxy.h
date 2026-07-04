/* Runtime dump - QLPreviewItemProxy
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem>
{
    NSUUID * _uuid;
    NSString * _fileExtensionToken;
    int _fileExtensionHandle;
    int _index;
    char _isPromisedItem;
    NSURL * _url;
    NSString * _title;
    NSURL * _urlForDisplay;
    NSString * _contentType;
    NSString * _password;
    UIColor * _backgroundColorOverride;
    double _autoPlaybackPosition;
}

@property (readonly) NSUUID * uuid;
@property (retain) NSURL * url;
@property (retain) NSString * title;
@property (retain) NSURL * urlForDisplay;
@property (retain) NSString * contentType;
@property (retain) NSString * password;
@property int index;
@property char isPromisedItem;
@property double autoPlaybackPosition;
@property (retain, nonatomic) UIColor * backgroundColorOverride;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSURL * previewItemURL;
@property (readonly) NSString * previewItemTitle;

+ (NSArray *)encodedClasses;
+ (NSObject *)proxyWithPreviewItem:(<QLPreviewItem> *)arg0;
+ (char)supportsSecureCoding;

- (UIColor *)backgroundColorOverride;
- (char)isPromisedItem;
- (void)issueFileExtension;
- (void)consumeFileExtension;
- (double)autoPlaybackPosition;
- (QLPreviewItemProxy *)initWithPreviewItem:(<QLPreviewItem> *)arg0;
- (NSURL *)urlForDisplay;
- (void)setUrlForDisplay:(NSURL *)arg0;
- (void)setIsPromisedItem:(char)arg0;
- (void)setAutoPlaybackPosition:(double)arg0;
- (void)setBackgroundColorOverride:(UIColor *)arg0;
- (void)dealloc;
- (QLPreviewItemProxy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSURL *)url;
- (NSString *)title;
- (void)setUrl:(NSURL *)arg0;
- (int)index;
- (NSURL *)previewItemURL;
- (NSObject *)previewItemContentType;
- (NSObject *)previewItemURLForDisplay;
- (NSString *)previewItemTitle;
- (NSUUID *)uuid;
- (void)setIndex:(int)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (void)setContentType:(NSString *)arg0;
- (NSString *)contentType;

@end
