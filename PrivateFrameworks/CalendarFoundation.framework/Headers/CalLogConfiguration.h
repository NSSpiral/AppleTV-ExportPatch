/* Runtime dump - CalLogConfiguration
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogConfiguration : NSObject
{
    NSString * _name;
    NSMutableArray * _nodes;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSMutableArray * nodes;

- (CalLogConfiguration *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)parseConfigurationDefinition:(NSObject *)arg0;
- (NSObject *)parseNodeDefinition:(NSObject *)arg0;
- (NSObject *)parseWriterDefinition:(NSObject *)arg0;
- (NSObject *)parseFilterDefinition:(NSObject *)arg0;
- (CalLogConfiguration *)initWithDetailedDefinition:(NSObject *)arg0;
- (CalLogConfiguration *)initWithSimpleDefinition:(char)arg0;
- (void)setNodes:(NSMutableArray *)arg0;
- (NSMutableArray *)nodes;

@end
