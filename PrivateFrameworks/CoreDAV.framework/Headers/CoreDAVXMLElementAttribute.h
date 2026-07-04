/* Runtime dump - CoreDAVXMLElementAttribute
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVXMLElementAttribute : NSObject
{
    NSString * _name;
    NSString * _nameSpace;
    NSString * _value;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * nameSpace;
@property (retain, nonatomic) NSString * value;

- (void)dealloc;
- (CoreDAVXMLElementAttribute *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)nameSpace;
- (void)setNameSpace:(NSString *)arg0;
- (CoreDAVXMLElementAttribute *)initWithNameSpace:(NSString *)arg0 name:(NSString *)arg1 value:(NSString *)arg2;

@end
