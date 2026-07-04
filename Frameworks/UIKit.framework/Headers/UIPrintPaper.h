/* Runtime dump - UIPrintPaper
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaper : NSObject
{
    int _paperOrientation;
    id _internal;
}

@property (readonly) struct CGSize paperSize;
@property (readonly) struct CGRect printableRect;

+ (NSObject *)bestPaperForPageSize:(struct CGSize)arg0 andContentType:(int)arg1 withPapersFromArray:(NSArray *)arg2;
+ (NSObject *)_defaultPaperForOutputType:(int)arg0;
+ (NSObject *)_defaultPKPaperForOuptutType:(int)arg0;
+ (NSObject *)bestPaperForPageSize:(struct CGSize)arg0 withPapersFromArray:(NSArray *)arg1;
+ (UIPrintPaper *)_readyPaperListForPrinter:(id)arg0 withDuplexMode:(int)arg1 forContentType:(int)arg2 contentSize:(struct CGSize)arg3;
+ (NSObject *)_defaultPaperListForOutputType:(int)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (id)_pkPaper;
- (struct CGSize)paperSize;
- (struct CGRect)printableRect;
- (void)_updatePKPaper:(id)arg0;
- (UIPrintPaper *)_initWithPrintKitPaper:(id)arg0;
- (struct CGRect)_printableRectForDuplex:(id)arg0;
- (NSString *)_localizedName;
- (NSString *)_localizedMediaTypeName;
- (void)_setPaperOrientation:(int)arg0;
- (int)_paperOrientation;
- (struct CGRect)printRect;

@end
