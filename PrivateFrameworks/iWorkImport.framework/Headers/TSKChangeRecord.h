/* Runtime dump - TSKChangeRecord
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKChangeRecord : NSObject
{
    int mKind;
    id mDetails;
}

@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) id details;
@property (readonly, nonatomic) char allowedInCommit;

+ (TSKChangeRecord *)changeRecordWithKind:(int)arg0 details:(id *)arg1;

- (TSKChangeRecord *)initWithKind:(int)arg0 details:(id *)arg1;
- (char)allowedInCommit;
- (void)dealloc;
- (int)kind;
- (NSArray *)details;

@end
