/* Runtime dump - SCNShadableHelper
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNShadableHelper : NSObject <NSSecureCoding>
{
    NSDictionary * _uniformNameToType;
    id _owner;
    SCNProgram * _program;
    NSDictionary * _shaderModifiers;
    NSDictionary * _symbolToBinder;
    NSDictionary * _symbolToUnbinder;
}

@property (copy, nonatomic) NSDictionary * shaderModifiers;
@property (retain, nonatomic) SCNProgram * program;
@property (readonly, nonatomic) id owner;
@property (readonly, nonatomic) NSArray * shaderModifiersUniformNames;

+ (char)supportsSecureCoding;

- (void *)__CFObject;
- (void)handleBindingOfSymbol:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)ownerWillDie;
- (void)setProgram:(SCNProgram *)arg0;
- (SCNProgram *)program;
- (NSDictionary *)shaderModifiers;
- (void)setShaderModifiers:(NSDictionary *)arg0;
- (NSArray *)shaderModifiersUniformNames;
- (SCNShadableHelper *)initWithOwner:(NSObject *)arg0;
- (void)handleUnbindingOfSymbol:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)_stopObservingUniforms;
- (void)_stopObservingProgram;
- (void)commonDestroy;
- (void)_programDidChange:(NSDictionary *)arg0;
- (void)_setC3DProgramAndStartObservingUniforms;
- (void)_startObservingProgram;
- (void)_kvoUpdateUniformNamed:(id)arg0 ofType:(short)arg1 immediate:(char)arg2;
- (void)_startObservingUniformsOfC3DShaderModifiers:(id)arg0;
- (void)_setUniform:(SKUniform *)arg0 withC3DValue:(struct __C3DValue *)arg1;
- (void)_updateC3DProgramInputForSymbol:(id)arg0;
- (struct __C3DFXGLSLProfile *)_GLSLProfile;
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(int)arg0;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg0 forSymbol:(WDSymbol *)arg1;
- (void)_updateAllC3DProgramInputs;
- (void)_setC3DProgramDelegate;
- (void)_startObservingProgramUniforms:(id)arg0;
- (void)_customEncodingOfSCNShadableHelper:(NSObject *)arg0;
- (void)_customDecodingOfSCNShadableHelper:(NSObject *)arg0;
- (void)_didDecodeSCNShadableHelper:(NSObject *)arg0;
- (char)_bindValueForSymbol:(id)arg0 atLocation:(unsigned int)arg1 programID:(unsigned int)arg2 node:(BWNode *)arg3 renderer:(NSObject *)arg4;
- (void)_unbindValueForSymbol:(id)arg0 atLocation:(unsigned int)arg1 programID:(unsigned int)arg2 node:(BWNode *)arg3 renderer:(NSObject *)arg4;
- (void)dealloc;
- (SCNShadableHelper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isOpaque;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSString *)owner;
- (void)finalize;

@end
