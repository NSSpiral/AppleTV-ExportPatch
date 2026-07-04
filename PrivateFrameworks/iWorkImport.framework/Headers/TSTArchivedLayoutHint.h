/* Runtime dump - TSTArchivedLayoutHint
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>
{
    TSTLayoutHint * mHint;
}

@property (retain, nonatomic) TSTLayoutHint * hint;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSTArchivedLayoutHint *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (TSTArchivedLayoutHint *)initWithContext:(NSObject *)arg0 hint:(TSTLayoutHint *)arg1;
- (void)setHint:(TSTLayoutHint *)arg0;
- (void)dealloc;
- (TSTLayoutHint *)hint;

@end
