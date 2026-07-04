/* Runtime dump - DOMHTMLImageElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLImageElement : DOMHTMLElement

@property (copy) NSString * name;
@property (copy) NSString * align;
@property (copy) NSString * alt;
@property (copy) NSString * border;
@property int height;
@property int hspace;
@property char isMap;
@property (copy) NSString * longDesc;
@property (copy) NSString * src;
@property (copy) NSString * useMap;
@property int vspace;
@property int width;
@property (readonly) char complete;
@property (copy) NSString * lowsrc;
@property (readonly) int naturalHeight;
@property (readonly) int naturalWidth;
@property (readonly) int x;
@property (readonly) int y;
@property (readonly, copy) NSString * altDisplayString;
@property (readonly, copy) NSURL * absoluteImageURL;

+ (NSObject *)mf_edgeToEdgeImageAttachmentStyle;
+ (float)mf_maxPhotoWidth;

- (void)mf_constrainImageToSize:(struct CGSize)arg0;
- (void)mf_unconstrainImageSize;
- (void)recursivelyRemoveMailAttributes;
- (char)mf_isEdgeToEdgeFormatted;
- (char)mf_shouldFormatEdgeToEdge;
- (void)mf_applyEdgeToEdgeStyle;
- (char)alwaysAttemptToShowTapHighlight;
- (char)showsTapHighlight;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)width;
- (int)height;
- (NSDictionary *)dataRepresentation:(char)arg0;
- (NSString *)mimeType;
- (NSURL *)absoluteImageURL;
- (int)x;
- (int)y;
- (void)setWidth:(int)arg0;
- (void)setHeight:(int)arg0;
- (char)complete;
- (NSString *)border;
- (void)setBorder:(NSString *)arg0;
- (NSString *)align;
- (void)setAlign:(NSString *)arg0;
- (NSString *)alt;
- (void)setAlt:(NSString *)arg0;
- (int)hspace;
- (void)setHspace:(int)arg0;
- (int)vspace;
- (void)setVspace:(int)arg0;
- (NSString *)src;
- (void)setSrc:(NSString *)arg0;
- (NSString *)longDesc;
- (void)setLongDesc:(NSString *)arg0;
- (id)crossOrigin;
- (void)setCrossOrigin:(id)arg0;
- (char)isMap;
- (void)setIsMap:(char)arg0;
- (NSDictionary *)srcset;
- (void)setSrcset:(NSDictionary *)arg0;
- (NSString *)useMap;
- (void)setUseMap:(NSString *)arg0;
- (NSString *)lowsrc;
- (void)setLowsrc:(NSString *)arg0;
- (int)naturalHeight;
- (int)naturalWidth;
- (NSString *)altDisplayString;

@end
