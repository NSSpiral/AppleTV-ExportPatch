/* Runtime dump - NSFilePresenterOperationRecord
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterOperationRecord : NSObject
{
    NSString * operationDescription;
    int state;
    id reactor;
}

@property (readonly) NSString * operationDescription;
@property (readonly) int state;
@property id reactor;

+ (NSString *)operationRecordWithDescription:(NSString *)arg0;

- (void)setReactor:(id)arg0;
- (void)didBegin;
- (void)willEnd;
- (void)didEnd;
- (id)reactor;
- (NSString *)operationDescription;
- (void)dealloc;
- (NSString *)description;
- (int)state;

@end
