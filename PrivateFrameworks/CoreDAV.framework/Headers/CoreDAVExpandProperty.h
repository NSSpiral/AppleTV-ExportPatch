/* Runtime dump - CoreDAVExpandProperty
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVExpandProperty : NSObject
{
    NSSet * _propertiesToFind;
    NSString * _expandedName;
    NSString * _expandedNameSpace;
}

@property (retain, nonatomic) NSSet * propertiesToFind;
@property (retain, nonatomic) NSString * expandedName;
@property (retain, nonatomic) NSString * expandedNameSpace;

- (void)dealloc;
- (NSSet *)propertiesToFind;
- (void)setPropertiesToFind:(NSSet *)arg0;
- (CoreDAVExpandProperty *)initWithPropertiesToFind:(NSSet *)arg0 expandedName:(NSString *)arg1 expandedNameSpace:(NSString *)arg2;
- (NSString *)expandedName;
- (void)setExpandedName:(NSString *)arg0;
- (NSString *)expandedNameSpace;
- (void)setExpandedNameSpace:(NSString *)arg0;

@end
