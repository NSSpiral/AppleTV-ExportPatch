/* Runtime dump - TSPPasteboardObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardObject : TSPObject
{
    char _isCrossAppPaste;
    char _isCrossDocumentPaste;
    char _isTextPrimary;
    char _isSmartCopyPaste;
    NSArray * _drawables;
    NSArray * _styles;
    TSPObject * _stylesheet;
    TSPObject * _theme;
    TSPObject * _wpStorage;
    TSPObject * _guideStorage;
    TSPObject * _appNativeObject;
}

@property (copy, nonatomic) NSArray * drawables;
@property (copy, nonatomic) NSArray * styles;
@property (retain, nonatomic) TSPObject * stylesheet;
@property (retain, nonatomic) TSPObject * theme;
@property (retain, nonatomic) TSPObject * wpStorage;
@property (retain, nonatomic) TSPObject * guideStorage;
@property (retain, nonatomic) TSPObject * appNativeObject;
@property (readonly, nonatomic) char isCrossAppPaste;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (nonatomic) char isTextPrimary;
@property (nonatomic) char isSmartCopyPaste;

- (TSPPasteboardObject *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (long long)tsp_identifier;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (void)setDrawables:(NSArray *)arg0;
- (TSPObject *)wpStorage;
- (void)setWpStorage:(TSPObject *)arg0;
- (TSPObject *)guideStorage;
- (void)setGuideStorage:(TSPObject *)arg0;
- (TSPObject *)appNativeObject;
- (void)setAppNativeObject:(TSPObject *)arg0;
- (char)isTextPrimary;
- (void)setIsTextPrimary:(char)arg0;
- (char)isSmartCopyPaste;
- (void)setIsSmartCopyPaste:(char)arg0;
- (TSPPasteboardObject *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;
- (TSPObject *)theme;
- (NSArray *)drawables;
- (void)setTheme:(TSPObject *)arg0;
- (void)setStyles:(NSArray *)arg0;
- (NSArray *)styles;
- (TSPObject *)stylesheet;
- (void)setStylesheet:(TSPObject *)arg0;

@end
