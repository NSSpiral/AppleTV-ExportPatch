/* Runtime dump - TSATemplateInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSATemplateInfo : NSObject
{
    NSString * _identifier;
    NSString * _displayName;
}

@property (readonly, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSURL * previewImageURL;
@property (readonly, nonatomic) UIImage * previewImage;
@property (readonly, nonatomic) NSURL * documentURL;
@property (readonly, nonatomic) NSBundle * localizationBundle;
@property (readonly, nonatomic) char isAvailable;
@property (readonly, nonatomic) char isUserTemplate;

- (NSBundle *)localizationBundle;
- (void)prepareForNewDocumentWithQueue:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)makeIdentifier;
- (NSURL *)previewImageURL;
- (char)isUserTemplate;
- (TSATemplateInfo *)initWithDisplayName:(NSString *)arg0;
- (void)dealloc;
- (NSString *)identifier;
- (NSString *)displayName;
- (NSURL *)documentURL;
- (void)setDisplayName:(NSString *)arg0;
- (char)isAvailable;
- (UIImage *)previewImage;

@end
