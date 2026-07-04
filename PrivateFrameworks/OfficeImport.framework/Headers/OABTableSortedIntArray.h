/* Runtime dump - OABTableSortedIntArray
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABTableSortedIntArray : NSObject
{
    NSArray * mIntArray;
}

- (void)dealloc;
- (int)intAtIndex:(int)arg0;
- (OABTableSortedIntArray *)initWithIntSet:(NSSet *)arg0;
- (int)indexOfInt:(int)arg0;
- (int)dim;

@end
