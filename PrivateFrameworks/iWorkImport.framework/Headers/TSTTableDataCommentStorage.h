/* Runtime dump - TSTTableDataCommentStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableDataCommentStorage : TSTTableDataObject
{
    TSDCommentStorage * mCommentStorage;
}

- (TSTTableDataCommentStorage *)initObjectWithCommentStorage:(TSDCommentStorage *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;

@end
