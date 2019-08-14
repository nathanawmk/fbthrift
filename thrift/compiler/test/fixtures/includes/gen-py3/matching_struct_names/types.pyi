#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as __iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import NOTSET, NOTSETTYPE
import typing as _typing

import sys
import itertools
import module.types as _module_types


__property__ = property


class MyStruct(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        field: _typing.Union[str, NOTSETTYPE, None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...

    @__property__
    def field(self) -> str: ...


class Combo(thrift.py3.types.Struct, _typing.Hashable, _typing.Iterable[_typing.Tuple[str, _typing.Any]]):
    def __init__(
        self, *,
        listOfOurMyStructLists: _typing.Optional[_typing.Sequence[_typing.Sequence['MyStruct']]]=None,
        theirMyStructList: _typing.Optional[_typing.Sequence[_module_types.MyStruct]]=None,
        ourMyStructList: _typing.Optional[_typing.Sequence['MyStruct']]=None,
        listOfTheirMyStructList: _typing.Optional[_typing.Sequence[_typing.Sequence[_module_types.MyStruct]]]=None
    ) -> None: ...

    def __call__(
        self, *,
        listOfOurMyStructLists: _typing.Union[_typing.Sequence[_typing.Sequence['MyStruct']], NOTSETTYPE, None]=NOTSET,
        theirMyStructList: _typing.Union[_typing.Sequence[_module_types.MyStruct], NOTSETTYPE, None]=NOTSET,
        ourMyStructList: _typing.Union[_typing.Sequence['MyStruct'], NOTSETTYPE, None]=NOTSET,
        listOfTheirMyStructList: _typing.Union[_typing.Sequence[_typing.Sequence[_module_types.MyStruct]], NOTSETTYPE, None]=NOTSET
    ) -> Combo: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Combo'], bytes]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Any]]: ...
    def __bool__(self) -> bool: ...
    def __hash__(self) -> int: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Combo') -> bool: ...
    def __gt__(self, other: 'Combo') -> bool: ...
    def __le__(self, other: 'Combo') -> bool: ...
    def __ge__(self, other: 'Combo') -> bool: ...

    @__property__
    def listOfOurMyStructLists(self) -> _typing.Sequence[_typing.Sequence['MyStruct']]: ...
    @__property__
    def theirMyStructList(self) -> _typing.Sequence[_module_types.MyStruct]: ...
    @__property__
    def ourMyStructList(self) -> _typing.Sequence['MyStruct']: ...
    @__property__
    def listOfTheirMyStructList(self) -> _typing.Sequence[_typing.Sequence[_module_types.MyStruct]]: ...


_List__MyStructT = _typing.TypeVar('_List__MyStructT', bound=_typing.Sequence['MyStruct'])


class List__MyStruct(_typing.Sequence['MyStruct'], _typing.Hashable):
    def __init__(self, items: _typing.Sequence['MyStruct']=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence['MyStruct']: ...
    @_typing.overload
    def __getitem__(self, i: int) -> 'MyStruct': ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence['MyStruct']: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence['MyStruct']) -> 'List__MyStruct': ...
    def __radd__(self, other: _List__MyStructT) -> _List__MyStructT: ...
    def __reversed__(self) -> _typing.Iterator['MyStruct']: ...
    def __iter__(self) -> _typing.Iterator['MyStruct']: ...


_List__List__MyStructT = _typing.TypeVar('_List__List__MyStructT', bound=_typing.Sequence[_typing.Sequence['MyStruct']])


class List__List__MyStruct(_typing.Sequence[_typing.Sequence['MyStruct']], _typing.Hashable):
    def __init__(self, items: _typing.Sequence[_typing.Sequence['MyStruct']]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence['MyStruct']]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence['MyStruct']: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence['MyStruct']]: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence['MyStruct']]) -> 'List__List__MyStruct': ...
    def __radd__(self, other: _List__List__MyStructT) -> _List__List__MyStructT: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence['MyStruct']]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence['MyStruct']]: ...


_List__module_MyStructT = _typing.TypeVar('_List__module_MyStructT', bound=_typing.Sequence[_module_types.MyStruct])


class List__module_MyStruct(_typing.Sequence[_module_types.MyStruct], _typing.Hashable):
    def __init__(self, items: _typing.Sequence[_module_types.MyStruct]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence[_module_types.MyStruct]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _module_types.MyStruct: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_module_types.MyStruct]: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence[_module_types.MyStruct]) -> 'List__module_MyStruct': ...
    def __radd__(self, other: _List__module_MyStructT) -> _List__module_MyStructT: ...
    def __reversed__(self) -> _typing.Iterator[_module_types.MyStruct]: ...
    def __iter__(self) -> _typing.Iterator[_module_types.MyStruct]: ...


_List__List__module_MyStructT = _typing.TypeVar('_List__List__module_MyStructT', bound=_typing.Sequence[_typing.Sequence[_module_types.MyStruct]])


class List__List__module_MyStruct(_typing.Sequence[_typing.Sequence[_module_types.MyStruct]], _typing.Hashable):
    def __init__(self, items: _typing.Sequence[_typing.Sequence[_module_types.MyStruct]]=None) -> None: ...
    def __repr__(self) -> str: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __contains__(self, x: object) -> bool: ...
    def __copy__(self) -> _typing.Sequence[_typing.Sequence[_module_types.MyStruct]]: ...
    @_typing.overload
    def __getitem__(self, i: int) -> _typing.Sequence[_module_types.MyStruct]: ...
    @_typing.overload
    def __getitem__(self, s: slice) -> _typing.Sequence[_typing.Sequence[_module_types.MyStruct]]: ...
    def count(self, item: _typing.Any) -> int: ...
    def index(self, item: _typing.Any, start: int = ..., stop: int = ...) -> int: ...
    def __add__(self, other: _typing.Sequence[_typing.Sequence[_module_types.MyStruct]]) -> 'List__List__module_MyStruct': ...
    def __radd__(self, other: _List__List__module_MyStructT) -> _List__List__module_MyStructT: ...
    def __reversed__(self) -> _typing.Iterator[_typing.Sequence[_module_types.MyStruct]]: ...
    def __iter__(self) -> _typing.Iterator[_typing.Sequence[_module_types.MyStruct]]: ...


