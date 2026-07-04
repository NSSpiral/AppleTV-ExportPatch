/* Runtime dump - EDFill
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFill : NSObject <NSCopying>
{
    EDResources * mResources;
}

+ (NSArray *)fillWithResources:(NSArray *)arg0;

- (EDFill *)copyWithZone:(struct _NSZone *)arg0;
- (BOOL)isEmpty;
- (EDFill *)initWithResources:(NSArray *)arg0;

@end
