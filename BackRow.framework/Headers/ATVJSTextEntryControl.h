/* Runtime dump - ATVJSTextEntryControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVProxyViewController, BRMerchant;
@interface ATVJSTextEntryControl : NSObject
{
    NSString * _loadingImageID;
    ATVImage * _image;
    char _hideText;
    ATVProxyViewController * _proxyViewController;
    BRMerchant * _merchant;
    int _textEntryStyle;
    NSString * _type;
    NSString * _title;
    NSString * _instructions;
    NSString * _label;
    NSString * _footnote;
    NSString * _defaultValue;
    NSString * _imageURL;
    id _submitBlock;
    id _cancelBlock;
}

@property (nonatomic) ATVProxyViewController * proxyViewController;
@property (retain, nonatomic) BRMerchant * merchant;
@property (nonatomic) int textEntryStyle;
@property (nonatomic) char hideText;
@property (retain, nonatomic) NSString * type;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * instructions;
@property (retain, nonatomic) NSString * label;
@property (retain, nonatomic) NSString * footnote;
@property (retain, nonatomic) NSString * defaultValue;
@property (retain, nonatomic) NSString * imageURL;
@property (copy, nonatomic) id submitBlock;
@property (copy, nonatomic) id cancelBlock;
@property (readonly, nonatomic) id onLoad;
@property (readonly, nonatomic) id onLoadCompletion;
@property (readonly, nonatomic) id onCancel;

- (BRMerchant *)merchant;
- (void)setTextEntryStyle:(int)arg0;
- (void)setMerchant:(BRMerchant *)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (SADomainObjectCancel *)onCancel;
- (void)_imageLoaded:(id)arg0;
- (ATVProxyViewController *)proxyViewController;
- (char)hideText;
- (int)textEntryStyle;
- (id /* block */)submitBlock;
- (id /* block */)cancelBlock;
- (void)setProxyViewController:(ATVProxyViewController *)arg0;
- (id /* block */)onLoadCompletion;
- (void)setHideText:(char)arg0;
- (void)setSubmitBlock:(id /* block */)arg0;
- (void)setCancelBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)title;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void)setInstructions:(NSString *)arg0;
- (NSString *)instructions;
- (id)onLoad;
- (NSString *)defaultValue;
- (void)setImageURL:(NSString *)arg0;
- (NSString *)imageURL;
- (NSString *)footnote;
- (void)setFootnote:(NSString *)arg0;
- (void)setDefaultValue:(NSString *)arg0;

@end
