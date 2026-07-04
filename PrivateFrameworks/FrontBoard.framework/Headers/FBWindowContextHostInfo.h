/* Runtime dump - FBWindowContextHostInfo
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWindowContextHostInfo : NSObject <FBWindowContextManagerObserver>
{
    FBWindowContextManager * _contextManager;
    FBScene * _scene;
    FBWindowContextHostWrapperView * _wrapperView;
    NSMutableSet * _hiddenContexts;
    NSDictionary * _realContextHostViewChangedProperties;
    NSDictionary * _realContextHostViewOriginalProperties;
}

@property (readonly, retain, nonatomic) FBWindowContextHostWrapperView * wrapperView;
@property (readonly, retain, nonatomic) NSMutableSet * hiddenContexts;
@property (retain, nonatomic) NSDictionary * realContextHostViewChangedProperties;
@property (retain, nonatomic) NSDictionary * realContextHostViewOriginalProperties;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)windowContextManager:(NSObject *)arg0 didRepositionContext:(NSObject *)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (NSMutableSet *)hiddenContexts;
- (FBWindowContextHostWrapperView *)wrapperView;
- (FBWindowContextHostInfo *)initWithContextManager:(FBWindowContextManager *)arg0 hostManager:(NSObject *)arg1 scene:(FBScene *)arg2;
- (NSDictionary *)realContextHostViewChangedProperties;
- (NSDictionary *)realContextHostViewOriginalProperties;
- (void)setRealContextHostViewChangedProperties:(NSDictionary *)arg0;
- (void)setRealContextHostViewOriginalProperties:(NSDictionary *)arg0;

@end
