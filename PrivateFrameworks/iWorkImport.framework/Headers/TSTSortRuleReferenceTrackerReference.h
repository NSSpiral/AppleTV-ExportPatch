/* Runtime dump - TSTSortRuleReferenceTrackerReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTrackerReference : NSObject
{
    unsigned char mColumnIndex;
    TSCETrackedReference * mTrackedReference;
}

@property (nonatomic) unsigned char columnIndex;
@property (retain, nonatomic) TSCETrackedReference * trackedReference;

+ (NSObject *)referenceWithColumnIndex:(unsigned char)arg0 trackedReference:(TSCETrackedReference *)arg1;

- (char)hasTrackedReferenceEqualTo:(id)arg0;
- (TSTSortRuleReferenceTrackerReference *)initWithColumnIndex:(unsigned char)arg0 trackedReference:(TSCETrackedReference *)arg1;
- (TSCETrackedReference *)trackedReference;
- (void)setTrackedReference:(TSCETrackedReference *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setColumnIndex:(unsigned char)arg0;
- (unsigned char)columnIndex;

@end
