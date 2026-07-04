/* Runtime dump - MFPObjectTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPObjectTable : NSObject
{
    NSMutableDictionary * mObjects;
}

- (void)setObject:(NSObject *)arg0 atIndex:(int)arg1;
- (void)dealloc;
- (NSObject *)objectAtIndex:(int)arg0;
- (MFPObjectTable *)init;

@end
