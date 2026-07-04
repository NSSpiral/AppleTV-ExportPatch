/* Runtime dump - TSDErrorImageProvider
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDErrorImageProvider : TSDImageProvider

+ (TSDErrorImageProvider *)sharedInstance;
+ (TSDErrorImageProvider *)allocWithZone:(struct _NSZone *)arg0;
+ (TSDErrorImageProvider *)_singletonAlloc;

- (struct CGPDFDocument *)p_iconPDFDocument;
- (TSDErrorImageProvider *)retain;
- (void)release;
- (TSDErrorImageProvider *)autorelease;
- (unsigned int)retainCount;
- (char)isValid;
- (TSDErrorImageProvider *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (void)drawImageInContext:(struct CGContext *)arg0 rect:(struct CGRect)arg1;
- (char)isError;

@end
