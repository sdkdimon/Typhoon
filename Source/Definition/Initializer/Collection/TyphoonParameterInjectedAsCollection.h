////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>
#import "TyphoonInjectedAsCollection.h"
#import "TyphoonAbstractInjectedParameter.h"

/**
*/
@interface TyphoonParameterInjectedAsCollection : TyphoonInjectedAsCollection

@property(nonatomic, readonly) TyphoonParameterInjectionType type;
@property(nonatomic, readonly) NSUInteger index;

@property(nonatomic, readonly) TyphoonCollectionType collectionType;

- (id)initWithParameterIndex:(NSUInteger)index requiredType:(Class)requiredType;

@end
