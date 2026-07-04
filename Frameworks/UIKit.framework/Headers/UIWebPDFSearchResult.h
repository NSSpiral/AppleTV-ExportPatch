/* Runtime dump - UIWebPDFSearchResult
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFSearchResult : NSObject
{
    NSArray * rotationAngles;
    unsigned int pageIndex;
    NSArray * strings;
    NSString * string;
    NSArray * rects;
    struct CGRect boundingBox;
}

@property (nonatomic) unsigned int pageIndex;
@property (retain, nonatomic) NSString * string;
@property (nonatomic) struct CGRect boundingBox;
@property (retain, nonatomic) NSArray * strings;
@property (retain, nonatomic) NSArray * rects;
@property (retain, nonatomic) NSArray * rotationAngles;

- (void)dealloc;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (void)setStrings:(NSArray *)arg0;
- (NSArray *)strings;
- (void)setRects:(NSArray *)arg0;
- (NSArray *)rects;
- (struct CGRect)boundingBox;
- (NSArray *)rotationAngles;
- (unsigned int)pageIndex;
- (void)setRotationAngles:(NSArray *)arg0;
- (void)setPageIndex:(unsigned int)arg0;
- (void)setBoundingBox:(struct CGRect)arg0;

@end
