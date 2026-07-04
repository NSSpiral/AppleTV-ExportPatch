/* Runtime dump - TSTChangeDescriptor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTChangeDescriptor : NSObject
{
    int mChangeDescriptor;
    TSTCellRegion * mCellRegion;
    struct ? mCellID;
    TSTCellRegion * mStrokeRegion;
    NSHashTable * mReferenceIdentifiers;
}

@property (readonly, nonatomic) int changeDescriptor;
@property (readonly, nonatomic) TSTCellRegion * cellRegion;
@property (readonly, nonatomic) struct ? cellID;
@property (readonly, nonatomic) TSTCellRegion * strokeRegion;
@property (readonly, nonatomic) NSHashTable * referenceIdentifiers;
@property (readonly, nonatomic) struct TSUColumnRowRect strokeRange;
@property (readonly, nonatomic) struct TSUColumnRowRect cellRange;

+ (NSObject *)changeDescriptorWithType:(int)arg0 cellRange:(struct TSUColumnRowRect)arg1;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellRegion:(TSTCellRegion *)arg1 strokeRegion:(TSTCellRegion *)arg2;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellRegion:(TSTCellRegion *)arg1;
+ (NSObject *)changeDescriptorWithType:(int)arg0 strokeRegion:(TSTCellRegion *)arg1;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellID:(struct ?)arg1 cellRegion:(TSTCellRegion *)arg2 strokeRegion:(TSTCellRegion *)arg3;
+ (NSObject *)changeDescriptorWithType:(int)arg0;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellID:(struct ?)arg1 cellRange:(struct TSUColumnRowRect)arg2;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellID:(struct ?)arg1 cellRange:(struct TSUColumnRowRect)arg2 strokeRange:(struct ?)arg3;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellID:(struct ?)arg1 strokeRange:(struct TSUColumnRowRect)arg2;
+ (NSObject *)changeDescriptorWithType:(int)arg0 strokeRange:(struct TSUColumnRowRect)arg1;
+ (NSObject *)changeDescriptorWithType:(int)arg0 cellRange:(struct TSUColumnRowRect)arg1 strokeRange:(struct ?)arg2;
+ (NSObject *)changeDescriptorWithType:(int)arg0 referenceIdentifiers:(NSHashTable *)arg1;

- (struct TSUColumnRowRect)cellRange;
- (TSTChangeDescriptor *)initWithChangeDescriptorType:(int)arg0 andCellRegion:(NSObject *)arg1 andCellID:(struct ?)arg2 andStrokeRegion:(NSObject *)arg3 andReferenceIdentifiers:(id)arg4;
- (int)changeDescriptor;
- (TSTCellRegion *)cellRegion;
- (TSTCellRegion *)strokeRegion;
- (struct TSUColumnRowRect)strokeRange;
- (NSHashTable *)referenceIdentifiers;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (struct ?)cellID;

@end
