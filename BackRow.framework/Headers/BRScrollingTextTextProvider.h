/* Runtime dump - BRScrollingTextTextProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class BRTypesetter;
@interface BRScrollingTextTextProvider : NSObject <BRProvider>
{
    BRTypesetter * _typesetter;
    NSAttributedString * _string;
    <BRControlFactory> * _factory;
    struct CGSize _boxSize;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)providerWithAttributedString:(NSAttributedString *)arg0;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (void)setTextBoxSize:(struct CGSize)arg0;
- (void)_updateTypesetter;
- (void)dealloc;
- (BRScrollingTextTextProvider *)init;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (NSString *)attributedString;
- (NSObject *)dataAtIndex:(long)arg0;

@end
