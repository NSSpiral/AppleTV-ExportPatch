/* Runtime dump - TSCH3DShaderVariableLinkage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderVariableLinkage : NSObject
{
    TSCH3DShaderVariable * mVariable;
    struct TSCH3DShaderType mLinked;
    struct TSCH3DShaderVariableScopes mScope;
    struct TSCH3DShaderVariableScopes mDeclaredScope;
    char mIsUsed;
    NSMutableSet * mDependees;
}

@property (readonly, nonatomic) TSCH3DShaderVariable * variable;
@property (readonly, nonatomic) NSMutableSet * dependees;
@property (readonly, nonatomic) struct TSCH3DShaderType shaderType;
@property (readonly, nonatomic) struct TSCH3DShaderType linked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes scope;
@property (readonly, nonatomic) char isLinked;
@property (readonly, nonatomic) char notLinked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes declaredScope;
@property (nonatomic) char isUsed;
@property (readonly, nonatomic) char isSpecial;
@property (readonly, nonatomic) char isUniform;
@property (readonly, nonatomic) char hasAttribute;
@property (readonly, nonatomic) char isAttribute;
@property (readonly, nonatomic) char isVertexVarying;
@property (readonly, nonatomic) char isFragment;
@property (readonly, nonatomic) char hasFragment;
@property (readonly, nonatomic) char canHaveFragment;
@property (readonly, nonatomic) char isVertex;
@property (readonly, nonatomic) char hasVertex;
@property (readonly, nonatomic) char scopeHasFragment;
@property (readonly, nonatomic) char scopedInAll;
@property (readonly, nonatomic) char isFragmentLinkable;
@property (readonly, nonatomic) char isVertexLinkable;
@property (readonly, nonatomic) unsigned int hasGlobal;

+ (TSCH3DShaderVariableLinkage *)linkageWithVariable:(TSCH3DShaderVariable *)arg0;

- (struct TSCH3DShaderType)shaderType;
- (char)isSpecial;
- (TSCH3DShaderVariableLinkage *)initWithVariable:(TSCH3DShaderVariable *)arg0;
- (NSObject *)nameForShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (id)variableQualifiersWithStorageQualifier:(id)arg0;
- (char)isVarying:(struct TSCH3DShaderType)arg0;
- (char)isUniform;
- (char)isVertexVarying;
- (char)scopeHasFragment;
- (void)addShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (char)notLinked;
- (char)hasFragment;
- (char)isVertex;
- (char)isFragment;
- (char)hasVertex;
- (char)isGlobalScope:(struct TSCH3DShaderVariableScopeType)arg0;
- (unsigned int)hasGlobal;
- (char)hasShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (NSObject *)resolveGlobalNameForShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1 defaultTo:(id)arg2;
- (NSObject *)variableDeclarationInShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (NSMutableSet *)dependees;
- (char)hasAttribute;
- (char)hasVarying;
- (char)hasBody:(struct TSCH3DShaderType)arg0;
- (char)scopedInAll;
- (char)updateShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (void)removeShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (void)setShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (void)addBodyScope:(struct TSCH3DShaderType)arg0;
- (void)unlink;
- (void)addLinkage:(struct TSCH3DShaderType)arg0;
- (char)updateLinkage:(struct TSCH3DShaderType)arg0;
- (void)removeLinkage:(struct TSCH3DShaderType)arg0;
- (char)hasLinkage:(struct TSCH3DShaderType)arg0;
- (void)setLinkage:(struct TSCH3DShaderType)arg0;
- (char)canHaveFragment;
- (char)isFragmentLinkable;
- (char)isVertexLinkable;
- (NSObject *)globalNameForShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (void)addDeclaredShader:(struct TSCH3DShaderType)arg0 scope:(struct TSCH3DShaderVariableScopeType)arg1;
- (struct TSCH3DShaderType)linked;
- (struct TSCH3DShaderVariableScopes)declaredScope;
- (char)isUsed;
- (void)setIsUsed:(char)arg0;
- (char)isAttribute;
- (void)dealloc;
- (NSString *)description;
- (struct TSCH3DShaderVariableScopes)scope;
- (void).cxx_construct;
- (TSCH3DShaderVariable *)variable;
- (char)isLinked;

@end
