/* Runtime dump - TSDHyperlinkRegion
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDHyperlinkRegion : NSObject
{
    NSURL * mURL;
    TSUBezierPath * mBezierPath;
}

@property (retain, nonatomic) NSURL * URL;
@property (retain, nonatomic) TSUBezierPath * bezierPath;

+ (NSURL *)hyperlinkRegionWithURL:(NSString *)arg0 bezierPath:(TSUBezierPath *)arg1;

- (TSDHyperlinkRegion *)initWithURL:(NSString *)arg0 bezierPath:(TSUBezierPath *)arg1;
- (void)setBezierPath:(TSUBezierPath *)arg0;
- (void)dealloc;
- (TSUBezierPath *)bezierPath;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;

@end
