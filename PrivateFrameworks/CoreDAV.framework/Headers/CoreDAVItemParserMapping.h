/* Runtime dump - CoreDAVItemParserMapping
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVItemParserMapping : NSObject
{
    NSString * _nameSpace;
    NSString * _name;
    Class _parseClass;
}

@property (retain, nonatomic) NSString * nameSpace;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) Class parseClass;

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)nameSpace;
- (CoreDAVItemParserMapping *)initWithNameSpace:(NSString *)arg0 name:(NSString *)arg1 parseClass:(Class)arg2;
- (void)setNameSpace:(NSString *)arg0;
- (void)setParseClass:(Class)arg0;
- (Class)parseClass;

@end
