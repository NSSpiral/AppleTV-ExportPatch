/* Runtime dump - CoreDAVPropertySearchItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropertySearchItem : CoreDAVItem
{
    CoreDAVLeafItem * _prop;
    NSString * _match;
    NSString * _matchTypeAttribute;
}

@property (retain, nonatomic) CoreDAVLeafItem * prop;
@property (retain, nonatomic) NSString * match;
@property (retain, nonatomic) NSString * matchTypeAttribute;

- (void)dealloc;
- (CoreDAVPropertySearchItem *)init;
- (NSString *)description;
- (void)write:(char *)arg0;
- (CoreDAVLeafItem *)prop;
- (void)setProp:(CoreDAVLeafItem *)arg0;
- (NSString *)matchTypeAttribute;
- (CoreDAVPropertySearchItem *)initWithSearchPropertyNameSpace:(NSObject *)arg0 andName:(id *)arg1;
- (void)setMatchTypeAttribute:(NSString *)arg0;
- (NSString *)match;
- (void)setMatch:(NSString *)arg0;

@end
