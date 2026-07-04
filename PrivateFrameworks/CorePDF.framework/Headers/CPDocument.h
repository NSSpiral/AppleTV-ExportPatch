/* Runtime dump - CPDocument
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPDocument : NSObject
{
    NSMutableArray * pages;
}

- (void)dealloc;
- (CPDocument *)init;
- (void)addPage:(RUIPage *)arg0;

@end
