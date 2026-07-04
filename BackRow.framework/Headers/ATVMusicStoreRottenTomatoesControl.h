/* Runtime dump - ATVMusicStoreRottenTomatoesControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>
@interface ATVMusicStoreRottenTomatoesControl : BRControl
{
    NSDictionary * _itemDictionary;
}

+ (NSDictionary *)rottenTomatesControlWithDictionary:(NSDictionary *)arg0;

- (void)layoutSubcontrols;
- (struct CGRect)_addTextControlWithText:(NSString *)arg0 attributes:(SEL)arg1 maxSize:(struct CGSize)arg2 origin:(struct _MROrigin *)arg3;
- (struct CGRect)_addTextControlWithAttributedString:(NSAttributedString *)arg0 maxSize:(SEL)arg1 origin:(struct _MROrigin *)arg2;
- (struct CGRect)_addTextControlWithAttributedString:(NSAttributedString *)arg0 maxSize:(SEL)arg1 xOrigin:(id)arg2 topLine:(struct CGSize)arg3;
- (NSNumber *)_imageForFreshnessRating:(int)arg0;
- (NSNumber *)_labelForFreshnessRating:(int)arg0 locInfo:(NSDictionary *)arg1;
- (void)dealloc;
- (ATVMusicStoreRottenTomatoesControl *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
