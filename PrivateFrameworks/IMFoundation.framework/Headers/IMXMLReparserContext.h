/* Runtime dump - IMXMLReparserContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMXMLReparserContext : NSObject
{
    NSString * _inContent;
    NSString * _outContent;
    NSArray * _attributesToPreserve;
    NSDictionary * _attributesToMerge;
    NSError * _error;
}

@property (readonly, nonatomic) NSArray * attributesToPreserve;
@property (readonly, nonatomic) NSDictionary * attributesToMerge;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSString * outContent;
@property (readonly, retain) NSString * _inContent;

- (void)dealloc;
- (NSError *)error;
- (NSString *)_inContent;
- (void)_setOutContent:(NSObject *)arg0 error:(NSError *)arg1;
- (NSArray *)attributesToPreserve;
- (NSDictionary *)attributesToMerge;
- (IMXMLReparserContext *)initWithContent:(NSObject *)arg0 attributesToPreserve:(NSArray *)arg1 attributesToMerge:(NSDictionary *)arg2;
- (NSString *)outContent;

@end
